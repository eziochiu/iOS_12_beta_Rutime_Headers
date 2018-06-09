/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedVideoComponent : SXComponent

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSString *caption;

+ (id)typeString;

- (id)URLWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)traits;

@end
