//
//  ViewController.h
//  ImageSwitcherApp
//
//  Created by Jhonathan Sanchez on 2/15/16.
//  Copyright © 2016 Jhonathan Sanchez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    IBOutlet UIImageView *imageView;
    IBOutlet UIButton *fbButton;
    IBOutlet UIButton *twButton;
}

-(IBAction)fbClicked;
-(IBAction)twClicked;


@end

