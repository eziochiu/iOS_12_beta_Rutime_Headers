/* made by EzioChiu.
 */

@protocol CLSFaultProcessorDelegate <NSObject>

@required

- (<CLSDataServerInterface> *)dataServer:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)faultProcessor:(CLSFaultProcessor *)arg1 shouldFaultRelation:(CLSRelation *)arg2 fromObject:(struct NSObject { Class x1; }*)arg3;

@end
