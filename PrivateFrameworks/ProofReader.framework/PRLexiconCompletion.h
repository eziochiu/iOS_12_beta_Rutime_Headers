/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRLexiconCompletion : NSObject {
    double  _score;
    unsigned int  _tokenID;
}

- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;
- (double)score;
- (unsigned int)tokenID;

@end
