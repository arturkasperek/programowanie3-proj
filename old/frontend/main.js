import Vue from 'vue';
import VueRouter from 'vue-router';
import Table from './components/Table';
import Login from './components/Login';

import './styles/entry.scss';

Vue.use(VueRouter);
const routes = [
  { path: '/', redirect: '/play' },
  { path: '/play', component: Table },
  { path: '/login', component: Login },
  { path: '/register', component: Table }
];

const router = new VueRouter({
  mode: 'history',
  routes
});

const app = new Vue({
  router
}).$mount('#app');