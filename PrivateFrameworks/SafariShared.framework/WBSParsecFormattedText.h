/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecFormattedText : WBSParsecModel {
    bool  _emphasized;
    WBSParsecImageRepresentation * _glyphRepresentation;
    NSNumber * _spaceAfterInPoints;
    NSNumber * _spaceBeforeInPoints;
    NSString * _text;
}

@property (getter=isEmphasized, nonatomic, readonly) bool emphasized;
@property (nonatomic, readonly) WBSParsecImageRepresentation *glyphRepresentation;
@property (nonatomic, readonly) NSNumber *spaceAfterInPoints;
@property (nonatomic, readonly) NSNumber *spaceBeforeInPoints;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)schema;

- (void).cxx_destruct;
- (id)glyphRepresentation;
- (id)glyphWithSession:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEmphasized;
- (bool)isEqual:(id)arg1;
- (id)spaceAfterInPoints;
- (id)spaceBeforeInPoints;
- (id)text;

@end
