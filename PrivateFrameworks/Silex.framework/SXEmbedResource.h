/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedResource : SXResource

@property (nonatomic, readonly) NSString *HTML;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDate *expirationDate;

+ (id)typeString;

- (id)expirationDateWithValue:(id)arg1 withType:(int)arg2;

@end
