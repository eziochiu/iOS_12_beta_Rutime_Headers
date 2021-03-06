/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPluginSpecification : NSObject {
    NSString * _classOrProtocolName;
    NSString * _type;
    NSArray * _whitelistedNames;
}

@property (nonatomic, readonly) NSString *requiredClassOrProtocolName;
@property (nonatomic, readonly, copy) NSString *type;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)specificationsFromHostBundle:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithPlistSpecification:(id)arg1;
- (bool)isValid;
- (bool)matchesPluginBundle:(id)arg1;
- (id)requiredClassOrProtocolName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)type;

@end
