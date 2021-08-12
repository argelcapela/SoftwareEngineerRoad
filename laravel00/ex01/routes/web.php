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

Route::any('/', function () {
    return "Bem Vindo ao Site!";
});


Route::get('language={lang}', function ($lang) {
    if ($lang == "pt-br")
    {
        return "O site está em Português";
    }
    else if ($lang == "eng")
    {
        return "O site está em Inglês";
    }
    else if ($lang == "spa")
    {
        return "O site está em Espanhol";
    }
    else
    {
        return "Language not found!";    
    }
});

Route::any('/coringa', function () {
    echo "<h1>CORINGAAAAAAA</h1>";
});
