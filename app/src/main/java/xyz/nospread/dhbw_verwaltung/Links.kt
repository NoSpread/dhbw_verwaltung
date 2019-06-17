package xyz.nospread.dhbw_verwaltung

import android.content.Intent
import android.net.Uri
import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_links.*

class Links : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_links)
        openBrowser()
    }

    fun openBrowser() {
        dhbw_button.setOnClickListener {
            intent = Intent(Intent.ACTION_VIEW, Uri.parse("https://www.dhbw-stuttgart.de/home/"))
            startActivity(intent)
        }
        dhbw_button2.setOnClickListener {
            intent = Intent(Intent.ACTION_VIEW, Uri.parse("http://www.lehre.dhbw-stuttgart.de/~wstark/"))
            startActivity(intent)
        }

        dhbw_button3.setOnClickListener {
            intent = Intent(Intent.ACTION_VIEW, Uri.parse("https://saml.dhbw-stuttgart.de/idp/Authn/UserPassword"))
            startActivity(intent)

        }
    }
}
