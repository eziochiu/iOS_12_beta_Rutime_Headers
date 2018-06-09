/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity> {
    bool  _conformsToImage;
    bool  _conformsToMovie;
    NSString * _identifier;
}

@property (nonatomic) bool conformsToImage;
@property (nonatomic) bool conformsToMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isPrimaryFormat, nonatomic, readonly) bool primaryFormat;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)conformsToImage;
- (bool)conformsToMovie;
- (id)identifier;
- (bool)isPrimaryFormat;
- (void)setConformsToImage:(bool)arg1;
- (void)setConformsToMovie:(bool)arg1;
- (void)setIdentifier:(id)arg1;

@end
