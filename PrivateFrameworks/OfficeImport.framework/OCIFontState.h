/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCIFontState : NSObject {
    NSMutableDictionary * _replacedFontMap;
}

@property (nonatomic, readonly) NSMutableDictionary *replacedFontMap;

- (void)dealloc;
- (id)init;
- (id)replacedFontMap;

@end
