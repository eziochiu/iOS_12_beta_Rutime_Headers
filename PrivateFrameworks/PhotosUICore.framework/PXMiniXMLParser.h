/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMiniXMLParser : NSObject {
    NSScanner * __scanner;
    NSCharacterSet * __syntaxMarkerCharactersSet;
    id /* block */  _parsedCharactersBlock;
    id /* block */  _parsedEntityBlock;
    id /* block */  _parsedErrorBlock;
    id /* block */  _parsedTagBlock;
}

@property (nonatomic, readonly) NSScanner *_scanner;
@property (nonatomic, readonly) NSCharacterSet *_syntaxMarkerCharactersSet;
@property (nonatomic, copy) id /* block */ parsedCharactersBlock;
@property (nonatomic, copy) id /* block */ parsedEntityBlock;
@property (nonatomic, copy) id /* block */ parsedErrorBlock;
@property (nonatomic, copy) id /* block */ parsedTagBlock;

- (void).cxx_destruct;
- (bool)_isAtEnd;
- (bool)_parseCharacters;
- (bool)_parseEntity;
- (bool)_parseTag;
- (id)_scanner;
- (id)_syntaxMarkerCharactersSet;
- (bool)_tryScanningUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;
- (id /* block */)parsedCharactersBlock;
- (id /* block */)parsedEntityBlock;
- (id /* block */)parsedErrorBlock;
- (id /* block */)parsedTagBlock;
- (void)setParsedCharactersBlock:(id /* block */)arg1;
- (void)setParsedEntityBlock:(id /* block */)arg1;
- (void)setParsedErrorBlock:(id /* block */)arg1;
- (void)setParsedTagBlock:(id /* block */)arg1;

@end
