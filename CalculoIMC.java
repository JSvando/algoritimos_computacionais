public class CalculoIMC {
    public static void main(String[] args) {
        String nome = "jose vanderson";
        int idade = 21;
        double peso = 54.0;
        double altura = 164; // em cm
        double imc = peso / (altura * altura);

        System.out.println(nome);
        System.out.println("sua idade é " + idade);
        System.out.println("seu peso é " + peso + " kg");
        System.out.println("sua altura é " + altura + " cm");
        System.out.println("seu imc é " + imc);
    }
}
