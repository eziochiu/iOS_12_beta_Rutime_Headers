/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetPlaybackPosition : SADomainCommand

@property (nonatomic) int position;

+ (id)setPlaybackPosition;
+ (id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)position;
- (bool)requiresResponse;
- (void)setPosition:(int)arg1;

@end
