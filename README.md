# Bangladesh Railway E-Ticketing Service

This is a simple console application for Bangladesh Railway's E-Ticketing Service. It allows users to sign in, create an account, query train fares, view train routes, and purchase tickets.

## Technology Used

- **Programming Language**: C
- **Standard Libraries**: `stdio.h`, `string.h`, `time.h`
- **Data Structures**: Structures to manage train compartments and ticket fares

## Current Status

### Features Implemented:
- **Sign In**: Users can sign in with a predefined admin account.
- **Get Current Time**: Displays the current date and time when the program starts.
- **Fare Query**: Placeholder for querying train fares.
- **Train Route**: Placeholder for viewing train routes.
- **Purchase Ticket**: Placeholder for purchasing tickets.

### Features to be Implemented:
- **Account Creation**: Functionality to create a new user account.
- **Fare Query**: Implement the logic to query and display train fares.
- **Train Route**: Implement the logic to display available train routes.
- **Purchase Ticket**: Complete the ticket purchasing process.
- **Logout**: Implement the logout functionality.

## Future Scopes

- **User Authentication**: Add robust authentication and authorization mechanisms.
- **Database Integration**: Integrate with a database to manage users, trains, routes, and ticket bookings.
- **Error Handling**: Implement comprehensive error handling and input validation.
- **User Interface**: Develop a graphical user interface (GUI) for better user experience.
- **Payment Gateway**: Integrate with a payment gateway for ticket purchasing.
- **Email Notifications**: Send email notifications for account creation, booking confirmations, etc.
- **Advanced Queries**: Add advanced query options for fares, routes, and availability.

## How to Run

1. Compile the code using a C compiler:
    ```bash
    gcc -o railway_ticketing railway_ticketing.c
    ```

2. Run the compiled program:
    ```bash
    ./railway_ticketing
    ```

## Usage

1. On running the program, you will see the current date and time.
2. Choose an option to either sign in or create a new account (account creation feature is not yet implemented).
3. After signing in as an admin (`admin@admin.admin` with password `admin123`), you can choose to query fares, view train routes, purchase tickets, or log out.

## Contributing

Feel free to fork this repository and submit pull requests. For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the MIT License.
