import type { TurboModule } from 'react-native/Libraries/TurboModule/RCTExport';
// import type {TurboModule} from 'react-native'; in future versions
import { TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
  readonly reverseString: (input: string) => string;
  readonly stringLength: (input: string) => number;
}

export default TurboModuleRegistry.getEnforcing<Spec>('NativeSampleModule');
