#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h> // This is used for versions of react >= 0.40
#else
#import "RCTBridgeModule.h" // This is used for versions of react < 0.40
#endif

@interface RNStoreReview : NSObject <RCTBridgeModule>

@end
