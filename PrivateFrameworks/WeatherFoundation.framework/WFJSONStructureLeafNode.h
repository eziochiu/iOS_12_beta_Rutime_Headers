/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFJSONStructureLeafNode : NSObject {
    bool  _required;
}

@property (getter=isRequired, nonatomic) bool required;

+ (id)optionalLeafNode;
+ (id)requiredLeafNode;

- (bool)isRequired;
- (void)setRequired:(bool)arg1;

@end
