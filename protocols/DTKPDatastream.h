/* made by EzioChiu.
 */

@protocol DTKPDatastream <NSObject>

@required

- (id)createNextStream:(id*)arg1;
- (int)exportRawDataWithError:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 14: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long, id /* block */, void*, void, id /* block */, void*, bool, void*
- (bool)hasData;
- (int)importRawData:(void *)arg1 bufferSize:(void *)arg2 error:(void *)arg3 destructor:(void *)arg4; // needs 4 arg types, found 8: const void*, unsigned long long, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (int)peekAtRawDataWithError:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned long long, bool, void*
- (int)setWritingCompletedWithError:(id*)arg1;

@end
