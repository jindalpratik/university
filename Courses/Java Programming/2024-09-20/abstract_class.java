class Publication {
    String title;
    int price;
}

class Book extends Publication {
    int pages;
    String writer;

    Book(String title, int price, int pages, String writer) {
        this.title = title;
        this.price = price;
        this.pages = pages;
        this.writer = writer;
    }

    public void putdata() {
        System.out.println("Book Title " + this.title + ", written by " + this.writer + "has " + this.pages
                + " pages and of " + this.price + " rupees.");
    }
}

class CD extends Publication {
    int length;

    CD(String title, int price, int length) {
        this.title = title;
        this.price = price;
        this.length = length;
    }

    public void putdata() {
        System.out.println("CD Title " + this.title + ", is of " + this.length + " minutes length and of " + this.price
                + " rupees.");
    }
}