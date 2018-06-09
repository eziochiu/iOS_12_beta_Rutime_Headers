/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaEntityCustomPropertyHandlersCollection : NSObject {
    NSMutableSet * _customProperties;
    NSMutableDictionary * _customPropertyValueHandlers;
}

@property (nonatomic, readonly) NSSet *customProperties;
@property (nonatomic, readonly) NSDictionary *customPropertyValueHandlers;

- (void).cxx_destruct;
- (void)addCustomProperty:(id)arg1 withValueHandler:(id /* block */)arg2;
- (id)customProperties;
- (id)customPropertyValueHandlers;
- (id)init;

@end
