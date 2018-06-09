/* made by EzioChiu.
 */

@protocol TSCH3DGLBindable <NSObject>

@required

- (void)bindInSession:(TSCH3DSession *)arg1;
- (void)deactivateInContext:(TSCH3DGLContext *)arg1;
- (void)destroyResourcesInContext:(TSCH3DGLContext *)arg1;
- (bool)valid;

@end