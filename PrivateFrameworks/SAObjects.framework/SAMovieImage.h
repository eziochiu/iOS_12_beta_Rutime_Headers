/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieImage : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAMovieResolution *resolution;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uri;

+ (id)image;
+ (id)imageWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
