<?php

use Illuminate\Support\Facades\Route;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/',  // é como uma requisição toda vez que um URL for digitado
									// nesse caso o raiz / (public)

function () {     // então execute uma função
    return "Hello Wolrd Laravélico"; // retorna um texto na tela
		//ou
    //echo "Hello Wolrd Laravélico";
});