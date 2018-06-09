/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *type;

+ (unsigned int)descriptorType;
+ (id)descriptorWithType:(id)arg1 domain:(id)arg2;

- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)domain;
- (id)type;

@end
