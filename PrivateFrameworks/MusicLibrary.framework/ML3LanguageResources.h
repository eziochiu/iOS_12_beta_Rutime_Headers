/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LanguageResources : NSObject <NSSecureCoding> {
    NSString * _canonicalLanguageIdentifier;
    NSDictionary * _sectionsInfo;
    NSDictionary * _sortingDetails;
}

@property (nonatomic, readonly) NSString *canonicalLanguageIdentifier;
@property (nonatomic, readonly) NSDictionary *sectionsInfo;
@property (nonatomic, readonly) NSDictionary *sortingDetails;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalLanguageIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3;
- (id)sectionsInfo;
- (id)sortingDetails;

@end
