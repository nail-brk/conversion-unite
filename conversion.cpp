<!DOCTYPE html>
<html lang="fr">
  <head>
    <meta charset="UTF-8" />
    <title>🔁 Convertisseur</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        background: #eef2f3;
        display: flex;
        justify-content: center;
        align-items: center;
        height: 100vh;
      }
      .container {
        text-align: center;
        background: white;
        padding: 30px;
        border-radius: 10px;
        box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
      }
      select,
      input,
      button {
        margin: 10px;
        padding: 10px;
        font-size: 1rem;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <h1>🔁 Convertisseur</h1>
      <select id="conversion">
        <option value="1">🌡️ Celsius → Kelvin</option>
        <option value="2">📏 Mètres → Pieds</option>
        <option value="3">💶 Euros → Dinar algérien</option>
        <option value="4">💶 Euros → Dollar US</option>
        <option value="5">🚗 km/h → m/s</option>
      </select>
      <input type="number" id="valeur" placeholder="Valeur" />
      <button onclick="convertir()">Convertir</button>
      <p id="resultat"></p>
    </div>

    <script>
      function convertir() {
        const choix = document.getElementById("conversion").value;
        const valeur = parseFloat(document.getElementById("valeur").value);
        let res = 0;
        let unite = "";

        switch (choix) {
          case "1":
            res = valeur + 273.15;
            unite = "K";
            break;
          case "2":
            res = valeur * 3.28084;
            unite = "pieds";
            break;
          case "3":
            res = valeur * 149.14;
            unite = "DZD";
            break;
          case "4":
            res = valeur * 1.14;
            unite = "USD";
            break;
          case "5":
            res = valeur / 3.6;
            unite = "m/s";
            break;
        }

        document.getElementById(
          "resultat"
        ).innerText = `✅ Résultat : ${res.toFixed(2)} ${unite}`;
      }
    </script>
  </body>
</html>
