import Vue from 'vue';
import CardSet from './CardSet';

export default Vue.extend({
  template: `
    <div v-bind:class="'player ' + type">
        <card-set v-bind:cards="cards"></card-set>
        <div class="player-info">
            <span class="name">Artur Kasperek</span></br>
            <span class="chips">1,245</span>
        </div>
    </div>
  `,
  components: {
    'card-set': CardSet
  },
  props: ['cards', 'type']
});
