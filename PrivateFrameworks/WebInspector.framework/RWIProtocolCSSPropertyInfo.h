/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *longhands;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *values;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithName:(id)arg1;
- (id)longhands;
- (id)name;
- (void)setLonghands:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithName:(id)arg1;

@end
