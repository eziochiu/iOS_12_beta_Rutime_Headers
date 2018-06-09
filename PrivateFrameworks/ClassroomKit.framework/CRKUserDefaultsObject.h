/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUserDefaultsObject : NSObject {
    NSUserDefaults * _defaults;
    NSString * _key;
}

@property (nonatomic, readonly) NSUserDefaults *defaults;
@property (nonatomic, readonly, copy) NSString *key;
@property (retain) id value;

- (void).cxx_destruct;
- (id)defaults;
- (id)init;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;
- (id)initWithKey:(id)arg1;
- (id)key;
- (void)setValue:(id)arg1;
- (id)value;

@end
