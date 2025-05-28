#define pb1 2
#define pb2 3
#define pb3 18
#define s1 19
#define s2 16
#define s3 17
#define run 6
#define dir 46
int b;


void setup() {
  pinMode(pb1, INPUT_PULLUP);
  pinMode(pb2, INPUT_PULLUP);
  pinMode(pb3, INPUT_PULLUP);
  pinMode(run, OUTPUT);
  pinMode(dir, OUTPUT);


  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(s3, INPUT_PULLUP);
  b = 1;
  // put your setup code here, to run once:
}

void loop() {
  if (b == 1) {
    digitalWrite(run, LOW);
    digitalWrite(dir, LOW);
    b = 2;
  }
  if (b == 2) {
    if (digitalRead(pb1) == 0) {
      b = 3;
    } else {
      b = 6;
    }
  }
  if (b == 3) {
    if (digitalRead(s1) == 0) {
      b == 1;
    } else {
      b = 4;
    }
  }
  if (b == 4) {
    digitalWrite(run, HIGH);
    digitalWrite(dir, LOW);
    b = 5;
  }
  if (b == 5) {
    if (digitalRead(s1) == 0) {
      b = 1;
    }
  }
  if (b == 6) {
    if (digitalRead(pb2) == 0) {
      b = 7;

    } else {
      b = 12;
    }
  }
  if (b == 7) {
    if (digitalRead(s3) == 1) {
      b = 8;
    } else {
      b = 10;
    }
  }

  if (b == 8) {
    digitalWrite(run, HIGH);
    digitalWrite(dir, LOW);
    b = 9;
  }
  if (b == 9) {
    if (digitalRead(s2) == 1) {
      b = 1;
    }
  }

  if (b == 10) {
    if (digitalRead(s1) == 0) {
      b = 11;

    } else {
      b = 1;
    }
  }
  if (b == 11) {
    digitalWrite(run, HIGH);
    digitalWrite(dir, HIGH);
    b = 9;
  }

  if (b == 12) {
    if (digitalRead(pb3) == 0) {
      b = 13;

    } else {
      b = 1;
    }
  }
  if (b == 13) {
    if (digitalRead(s3) == 1) {
      b = 1;

    } else {
      b = 14;
    }
  }
  if (b == 14) {
    digitalWrite(run, HIGH);
    digitalWrite(dir, HIGH);
    b = 15;
  }
  if (b == 15) {
    if (digitalRead(s3) == 1) {
      b = 1;
    }
  }








  // put your main code here, to run repeatedly:
}
