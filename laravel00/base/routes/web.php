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


Route::get('{sapato}/{numero?}', function ($sapato, $numero = null) {
   if ($numero)
   {
       return "O número do sapato é $numero";
   }
   else
   {
       return "O sapato é $sapato e o número não foi informado!";
   }
});
