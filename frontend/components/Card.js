import Vue from 'vue';

export default Vue.extend({
  template: `<img class="poker-card" v-bind:src="'/assets/' + type + '.png'" />`,
  props: ['type'],
  data: function () {
    return {};
  }
});
