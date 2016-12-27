import Vue from 'vue';
import CardSet from './CardSet';

export default Vue.extend({
  template: `
    <div class="croupier">
        <card-set v-bind:cards="cards"></card-set>
    </div>
  `,
  components: {
    'card-set': CardSet
  },
  props: ['cards']
});
