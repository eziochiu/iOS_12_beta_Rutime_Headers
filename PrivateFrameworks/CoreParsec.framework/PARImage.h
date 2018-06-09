/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARImage : SFURLImage

@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, retain) NSURL *url;

+ (id)imageWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)endpoint;
- (void)setEndpoint:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
