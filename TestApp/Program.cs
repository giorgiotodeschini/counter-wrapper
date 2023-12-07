using CounterNet;

CounterWrapper counter = new();
Console.WriteLine("Initial value!");
Console.WriteLine(counter.Value);

Console.WriteLine("We add 5 to the counter value");
counter.Add(5);
Console.WriteLine(counter.Value);

Console.WriteLine("We subtract 2 to the counter value");
counter.Sub(2);
Console.WriteLine(counter.Value);

Console.WriteLine($"The final value is {counter.Value}");

Console.WriteLine("We set the value to 10");
counter.Value = 10;
Console.WriteLine($"Now the value is {counter.Value}");
