#ifdef __cplusplus
#import "react-native-gnunet.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNGnunetSpec.h"

@interface Gnunet : NSObject <NativeGnunetSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Gnunet : NSObject <RCTBridgeModule>
#endif

@end
