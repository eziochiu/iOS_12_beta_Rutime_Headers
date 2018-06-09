/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {
    NSMutableDictionary * _polarityMapsByLanguageID;
}

@property (retain) NSMutableDictionary *polarityMapsByLanguageID;

- (void).cxx_destruct;
- (id)init;
- (struct __LSMMap { }*)polarityMapForLanguageID:(id)arg1;
- (id)polarityMapsByLanguageID;
- (void)setPolarityMapsByLanguageID:(id)arg1;

@end
