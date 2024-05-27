void generateNarrativeOfNoChampion() {

    cout << "As the dust settles over the rugged landscape, the sun dips below the horizon, casting long shadows over a tale of unfulfilled ambitions and dreams. This is the end of the movie, where the harsh reality rings clear: no one could reach the treasure. The quest that drove our characters through relentless challenges ends not with the triumph of victory but with the quiet of unclaimed fortunes, leaving the treasure still buried in the heart of the West, a silent witness to the trials and tribulations of those who dared to seek it." << endl;

}

void generateNarrativeOfChampion(Charachter A) {

    cout << "In the vast, sunbaked expanse of the Wild West, a solitary figure emerges victorious against all odds. " + A.getName() + " standing triumphant at the position of " << A.getPosition() << ", clutches the elusive treasure. With " << A.getColdCoin() << " gold coins jingling in their pocket, " << A.getSilverCoin() << " silver coins shimmering in the sunlight, and " << A.getBronzeCoin() << " bronze coins bearing the weight of their journey, " << A.getName() << " stands resolute, their trusty " << A.getGunType() << " gun by their side. This moment marks not just the end of a treacherous path but the beginning of a legend, as " << A.getName() << " etches their name in the annals of the West as the undisputed winner of the treasure." << endl;
}

void generateNarrativeOfDuel(Charachter Victim, Charachter Murderer) {

    cout << "In the rugged landscape of this Western movie, a dramatic duel unfolds. "
        << Victim.getName() << ", armed with " << Victim.getGunType() << ", and holding "
        << Victim.getColdCoin() << " gold coins, " << Victim.getSilverCoin()
        << " silver coins, and " << Victim.getBronzeCoin() << " bronze coins, faces a grim fate at the hands of "
        << Murderer.getName() << ", wielding the superior " << Murderer.gun_type << ". At this pivotal moment, "
        << Murderer.getName() << " stands with " << Murderer.getColdCoin() << " gold coins, "
        << Murderer.getSilverCoin() << " silver coins, and " << Murderer.getBronzeCoin()
        << " bronze coins. The aftermath of this duel paints a vivid picture of the harsh West: "
        << Victim.getName() << " falls at step " << Victim.getPosition() << ", their journey ending amidst the dust and echoes of gunshots, while "
        << Murderer.getName() << ", at step " << Murderer.getPosition() << ", carries the heavy burden of survival, weighed down by both their spoils and the cost of their actions."
        << endl;
    return;
}