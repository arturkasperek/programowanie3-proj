import Vue from 'vue';

export default Vue.extend({
  template: `
    <div>
        <input placeholder="Username" v-model="user">
        <input placeholder="Password" v-model="password">
        <button v-on:click="login()">Login</button>
    </div>
  `,
  props: ['type'],
  methods: {
    login: function () {

    }
  },
  data: function () {
    return {
      user: '',
      password: ''
    };
  }
});
