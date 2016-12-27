import Vue from 'vue';
import Card from './Card';

export default Vue.extend({
  template: `
    <div class="poker-card-set">
        <card v-for="card in cards" v-bind:type="card"></card>
    </div>
  `,
  components: {
    'card': Card
  },
  props: ['cards'],
  data: function () {
    console.log(this);
    return {};
  }
});
