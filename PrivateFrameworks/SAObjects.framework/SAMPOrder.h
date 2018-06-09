/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPOrder : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool descending;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mediaItemProperty;
@property (readonly) Class superclass;

+ (id)order;
+ (id)orderWithDictionary:(id)arg1 context:(id)arg2;

- (bool)descending;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItemProperty;
- (void)setDescending:(bool)arg1;
- (void)setMediaItemProperty:(id)arg1;

@end
