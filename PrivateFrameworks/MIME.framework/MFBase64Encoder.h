/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBase64Encoder : MFBaseFilterDataConsumer {
    unsigned long long  _left;
    unsigned char  _leftovers;
    unsigned long long  _line;
    unsigned long long  _lineBreak;
    BOOL  _padChar;
    const char * _table;
}

@property (nonatomic) bool allowSlash;
@property (nonatomic) unsigned long long lineBreak;
@property (nonatomic) BOOL padChar;

- (bool)allowSlash;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)initWithConsumers:(id)arg1;
- (unsigned long long)lineBreak;
- (BOOL)padChar;
- (void)setAllowSlash:(bool)arg1;
- (void)setLineBreak:(unsigned long long)arg1;
- (void)setPadChar:(BOOL)arg1;
- (void)setStandardLineBreak;

@end
