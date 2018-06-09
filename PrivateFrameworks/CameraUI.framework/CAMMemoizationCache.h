/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMemoizationCache : NSObject {
    NSMutableDictionary * __dictionary;
    bool  _memoizesNil;
}

@property (nonatomic, readonly) NSMutableDictionary *_dictionary;
@property (nonatomic, readonly) bool memoizesNil;

- (void).cxx_destruct;
- (id)_dictionary;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithMemoizesNil:(bool)arg1;
- (bool)memoizesNil;
- (id)objectForKey:(id)arg1 memoizationBlock:(id /* block */)arg2;

@end
