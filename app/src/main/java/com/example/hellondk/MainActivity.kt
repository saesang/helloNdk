package com.example.hellondk

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import com.example.hellondk.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        with(binding) {
            btnSave.setOnClickListener {
                val username = inputName.text.toString()
                txtGreeting.text = getHelloUser(username)
            }

            btnNdk.setOnClickListener {
                txtGreeting.text = getHelloNdk()
            }

            btnWorld.setOnClickListener {
                txtGreeting.text = getHelloWorld()
            }

        }
    }

    external fun getHelloUser(username: String): String
    external fun getHelloNdk(): String
    external fun getHelloWorld(): String

    companion object {
        init {
            System.loadLibrary("hellondk")
        }
    }
}