/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKUCUMUnitDisplayConverter : NSObject {
    NSDictionary * _displayNameLookupTable;
    NSDictionary * _synonymLookupTable;
}

@property (readonly) NSDictionary *displayNameLookupTable;
@property (readonly) NSDictionary *synonymLookupTable;

- (void).cxx_destruct;
- (id)displayNameForUCUMUnitString:(id)arg1;
- (id)displayNameLookupTable;
- (id)init;
- (id)synonymForUCUMUnitString:(id)arg1;
- (id)synonymLookupTable;

@end
