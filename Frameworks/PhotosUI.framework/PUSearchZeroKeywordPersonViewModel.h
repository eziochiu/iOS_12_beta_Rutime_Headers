/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchZeroKeywordPersonViewModel : PUSearchZeroKeywordBaseViewModel {
    PHPerson * _person;
}

@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)debugDictionary;
- (id)initWithRepresentedObject:(id)arg1 representedPerson:(id)arg2;
- (id)person;
- (id)title;

@end
