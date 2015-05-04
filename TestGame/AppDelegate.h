//
//  AppDelegate.h
//  TestGame
//

//  Copyright (c) 2015 Aaron Randall. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <SpriteKit/SpriteKit.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet SKView *skView;

- (void)makeWindowTransparent;
- (void)makeWindowOpaque;
- (IBAction)blockSizeSmallSelected:(id)sender;
- (IBAction)blockSizeMediumSelected:(id)sender;
- (IBAction)blockSizeLargeSelected:(id)sender;

@property (weak) IBOutlet NSMenuItem *blockSizeSmallMenuItem;
@property (weak) IBOutlet NSMenuItem *blockSizeMediumMenuItem;
@property (weak) IBOutlet NSMenuItem *blockSizeLargeMenuItem;

@end
