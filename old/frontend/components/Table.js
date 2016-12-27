import Vue from 'vue';
import CardSet from './CardSet'
import Player from './Player';
import Croupier from './Croupier';

export default Vue.extend({
  template: `
    <div class="poker-table">
        <player v-bind:cards="['w3', 'sk']" type="me"></player>
        <player v-bind:cards="['back', 'back']" type="oponent"></player>
        <croupier v-bind:cards="['wa', 'wa', 'da']"></croupier>
    </div>
  `,
  components: {
    'card-set': CardSet,
    'player': Player,
    'croupier': Croupier
  },
  data: function () {
    return {};
  }
});
