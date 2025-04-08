<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Current Date and Time</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            text-align: center;
            margin-top: 50px;
        }
        h2 {
            color: #333;
        }
        p {
            font-size: 20px;
            font-weight: bold;
            color: #007bff;
        }
    </style>
</head>
<body>

    <h2>Current Date and Time</h2>
    <p id="dateTime"></p>

    <script>
        function updateDateTime() {
            let now = new Date();

            // Get date parts
            let day = String(now.getDate()).padStart(2, '0'); // Ensures two digits
            let month = String(now.getMonth() + 1).padStart(2, '0'); // Month starts from 0
            let year = now.getFullYear();

            // Get time parts
            let hours = String(now.getHours()).padStart(2, '0');
            let minutes = String(now.getMinutes()).padStart(2, '0');
            let seconds = String(now.getSeconds()).padStart(2, '0');

            // Format date and time
            let formattedDate = `${day}/${month}/${year}`;
            let formattedTime = `${hours}:${minutes}:${seconds}`;

            // Display in the webpage
            document.getElementById("dateTime").innerHTML = `Date: ${formattedDate} <br> Time: ${formattedTime}`;
        }

        // Update time every second
        setInterval(updateDateTime, 1000);

        // Call the function once to show immediately
        updateDateTime();
    </script>

</body>
</html>

