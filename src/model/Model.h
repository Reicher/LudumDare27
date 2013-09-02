#pragma once

#include <memory>
#include "IObservable.h"
#include "IActor.h"

namespace model {

//! Model for the game
class Model : public IObservable
{
public:
	Model();

	~Model();

	//! Initiates the model
	void init();

	//! Updates the model
	//!
	//! @param dt seconds elapsed since the last update call.
	void update( float dt );

	//! Adds an observer to the model.
	//!
	//! @param pObserver pointer to the observer to add.
	void addObserver( IObserver* pObserver );

	//! Creates a unique Id
	//!
	//! @returns the unique id.
	ActorId createId();

private:

	class Impl;

	std::auto_ptr<Impl> m_apImpl;

};

} // namespace model
