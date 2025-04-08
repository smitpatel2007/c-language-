<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Current Date and Time</title>
</head>
<body>

    <h2>Current Date and Time</h2>
    <p id="dateTime"></p>

    <script>
        function showDateTime() {
            let now = new Date(); // Get current date and time

            // Get date values
            let day = now.getDate();
            let month = now.getMonth() + 1; // Month starts from 0
            let year = now.getFullYear();

            // Add 0 before single-digit day & month
            if (day < 10) day = "0" + day;
            if (month < 10) month = "0" + month;

            // Get time values
            let hours = now.getHours();
            let minutes = now.getMinutes();
            let seconds = now.getSeconds();

            // Add 0 before single-digit time values
            if (hours < 10) hours = "0" + hours;
            if (minutes < 10) minutes = "0" + minutes;
            if (seconds < 10) seconds = "0" + seconds;

            // Format date and time
            let date = day + "/" + month + "/" + year;
            let time = hours + ":" + minutes + ":" + seconds;

            // Display on the webpage
            document.getElementById("dateTime").innerHTML = "Date: " + date + "<br>Time: " + time;
        }

        // Run the function every second to update time
        setInterval(showDateTime, 1000);

        // Call once to display immediately
        showDateTime();
    </script>

</body>
</html>
