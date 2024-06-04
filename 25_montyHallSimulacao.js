function simulateMontyHall(numTrials, switchDoor) {
    let wins = 0;

    for (let i = 0; i < numTrials; i++) {
        // Setup the doors
        let doors = [0, 0, 0];
        const carPosition = Math.floor(Math.random() * 3);
        doors[carPosition] = 1; // 1 represents the car, 0 represents a goat

        // Player makes an initial choice
        const playerChoice = Math.floor(Math.random() * 3);

        // Host opens a door that has a goat and isn't the player's initial choice
        let remainingDoors = doors.map((door, index) => index).filter(index => index !== playerChoice && doors[index] === 0);
        const doorOpenedByHost = remainingDoors[Math.floor(Math.random() * remainingDoors.length)];

        // Determine if player switches
        let finalChoice;
        if (switchDoor) {
            // Switch to the remaining closed door
            finalChoice = doors.map((door, index) => index).filter(index => index !== playerChoice && index !== doorOpenedByHost)[0];
        } else {
            // Stick with the initial choice
            finalChoice = playerChoice;
        }

        // Check if the player won
        if (doors[finalChoice] === 1) {
            wins++;
        }
    }

    return wins / numTrials;
}

// Parameters
const numTrials = 100000;
const switchWins = simulateMontyHall(numTrials, true);
const stayWins = simulateMontyHall(numTrials, false);

console.log(`Winning probability when switching: ${(switchWins * 100).toFixed(2)}%`);
console.log(`Winning probability when staying: ${(stayWins * 100).toFixed(2)}%`);
